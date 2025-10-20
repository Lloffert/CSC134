import pygame
import sys
import math
import random 

# Initialize Pygame
pygame.init()

# --- Game Settings ---
width, height = 600, 400
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Two-Player Collision Game")

# Set up the clock to control the frame rate (speed)
clock = pygame.time.Clock()
FPS = 60 

# Function to generate a random RGB color
def get_random_color():
    # Ensures the colors aren't too dark (range 100-255)
    return (random.randint(100, 255), random.randint(100, 255), random.randint(100, 255))

# --- BOUNCING BALL Properties (The DVD Ball) ---
dvd_x = width // 2      
dvd_y = height // 2     
dvd_radius = 20         
dvd_color = get_random_color() 

# Movement (Velocity)
dvd_dx = 2 
dvd_dy = 2

# --- PLAYER 1 Properties (WASD) ---
p1_radius = 15
p1_color = (0, 150, 255) # Blue
p1_speed = 5
p1_x = width // 4       # Start P1 on the left side
p1_y = height - p1_radius - 10 

# --- PLAYER 2 Properties (Arrow Keys) ---
p2_radius = 15
p2_color = (255, 50, 50) # Red
p2_speed = 5
p2_x = width * 3 // 4   # Start P2 on the right side
p2_y = height - p2_radius - 10 

# --- Collision Resolution Function ---
def resolve_collision(ball_a_x, ball_a_y, ball_a_r, ball_b_x, ball_b_y, ball_b_r):
    """Adjusts ball positions to prevent overlap."""
    distance = math.hypot(ball_a_x - ball_b_x, ball_a_y - ball_b_y)
    min_distance = ball_a_r + ball_b_r
    
    if distance < min_distance:
        overlap = min_distance - distance
        
        if distance == 0:
            angle = random.uniform(0, 2 * math.pi)
        else:
            angle = math.atan2(ball_a_y - ball_b_y, ball_a_x - ball_b_x)
            
        # Return the required adjustments (dx, dy) for *Ball A*
        dx = math.cos(angle) * (overlap / 2.0)
        dy = math.sin(angle) * (overlap / 2.0)
        return (True, dx, dy)
        
    return (False, 0, 0) # No collision

# --- Main Game Loop ---
running = True

while running:
    # 1. Event Handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
            
    # 2. Player Movement Logic
    keys = pygame.key.get_pressed()
    
    # Player 1 (WASD)
    if keys[pygame.K_a]: 
        p1_x -= p1_speed
    if keys[pygame.K_d]: 
        p1_x += p1_speed
    if keys[pygame.K_w]: 
        p1_y -= p1_speed
    if keys[pygame.K_s]: 
        p1_y += p1_speed

    # Player 2 (Arrow Keys)
    if keys[pygame.K_LEFT]: 
        p2_x -= p2_speed
    if keys[pygame.K_RIGHT]: 
        p2_x += p2_speed
    if keys[pygame.K_UP]: 
        p2_y -= p2_speed
    if keys[pygame.K_DOWN]: 
        p2_y += p2_speed

    # Keep players within boundaries
    p1_x = max(p1_radius, min(p1_x, width - p1_radius))
    p1_y = max(p1_radius, min(p1_y, height - p1_radius))
    
    p2_x = max(p2_radius, min(p2_x, width - p2_radius))
    p2_y = max(p2_radius, min(p2_y, height - p2_radius))

    # 3. Bouncing Ball Logic
    dvd_x += dvd_dx
    dvd_y += dvd_dy

    # Boundary Collisions
    if dvd_x + dvd_radius > width or dvd_x - dvd_radius < 0:
        dvd_dx *= -1
    if dvd_y + dvd_radius > height or dvd_y - dvd_radius < 0:
        dvd_dy *= -1
        
    # 4. Collision Detection and Color Change

    # A. DVD Ball vs. Player 1
    hit, dx, dy = resolve_collision(dvd_x, dvd_y, dvd_radius, p1_x, p1_y, p1_radius)
    if hit:
        p1_color = dvd_color
        dvd_color = get_random_color()
        dvd_dx *= -1 # Simple bounce
        dvd_dy *= -1
        # Apply the resolution to the DVD ball
        dvd_x += dx
        dvd_y += dy
    
    # B. DVD Ball vs. Player 2
    hit, dx, dy = resolve_collision(dvd_x, dvd_y, dvd_radius, p2_x, p2_y, p2_radius)
    if hit:
        p2_color = dvd_color
        dvd_color = get_random_color()
        dvd_dx *= -1 # Simple bounce
        dvd_dy *= -1
        # Apply the resolution to the DVD ball
        dvd_x += dx
        dvd_y += dy
        
    # C. Player 1 vs. Player 2 (Optional: Prevent players from overlapping each other)
    hit, dx, dy = resolve_collision(p1_x, p1_y, p1_radius, p2_x, p2_y, p2_radius)
    if hit:
        # P1 moves away from P2
        p1_x += dx
        p1_y += dy
        # P2 moves away from P1 (opposite direction)
        p2_x -= dx 
        p2_y -= dy

    # 5. Drawing
    
    screen.fill((0, 0, 0)) # Fill black

    # Draw the Bouncing Ball
    pygame.draw.circle(screen, dvd_color, (dvd_x, dvd_y), dvd_radius)

    # Draw the Player 1 Circle
    pygame.draw.circle(screen, p1_color, (p1_x, p1_y), p1_radius)
    
    # Draw the Player 2 Circle
    pygame.draw.circle(screen, p2_color, (p2_x, p2_y), p2_radius)


    # 6. Control Speed and Update Display
    clock.tick(FPS) 
    pygame.display.flip()

# Quit Pygame
pygame.quit()
sys.exit()