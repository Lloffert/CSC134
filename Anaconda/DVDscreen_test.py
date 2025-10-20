import pygame
import sys

# Initialize Pygame
pygame.init()

# --- Game Settings ---
width, height = 600, 400
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("DVD Bounce with Player Control")

# Set up the clock to control the frame rate (speed)
clock = pygame.time.Clock()
FPS = 60 # Increased FPS for smoother player control

# --- BOUNCING BALL Properties ---
ball_x = width // 2      
ball_y = height // 2     
ball_radius = 20         
ball_color = (200, 200, 200) # Light grey

# Movement (Velocity)
ball_dx = 2 
ball_dy = 2

# --- PLAYER Properties (The controlled circle) ---
player_radius = 15
player_color = (0, 150, 255) # Blue
player_speed = 5
# Start the player near the bottom-center
player_x = width // 2
player_y = height - player_radius - 10 

# --- Main Game Loop ---
running = True

while running:
    # 1. Event Handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
            
    # --- Player Movement Logic ---
    # Get a list of all currently pressed keys
    keys = pygame.key.get_pressed()
    
    # Check for WASD input and update player position
    if keys[pygame.K_a]: # 'A' key (Left)
        player_x -= player_speed
    if keys[pygame.K_d]: # 'D' key (Right)
        player_x += player_speed
    if keys[pygame.K_w]: # 'W' key (Up)
        player_y -= player_speed
    if keys[pygame.K_s]: # 'S' key (Down)
        player_y += player_speed

    # Keep the player circle within the screen boundaries
    player_x = max(player_radius, min(player_x, width - player_radius))
    player_y = max(player_radius, min(player_y, height - player_radius))

    # --- Bouncing Ball Logic ---

    # 2. Update Ball Position
    ball_x += ball_dx
    ball_y += ball_dy

    # 3. Boundary Collisions and Direction Reversal
    
    # Horizontal (Left/Right) Boundary Check
    if ball_x + ball_radius > width or ball_x - ball_radius < 0:
        ball_dx *= -1 # Reverse the horizontal direction

    # Vertical (Top/Bottom) Boundary Check
    if ball_y + ball_radius > height or ball_y - ball_radius < 0:
        ball_dy *= -1 # Reverse the vertical direction

    # 4. Drawing
    
    # Fill the screen with black
    screen.fill((0, 0, 0)) 

    # Draw the Bouncing Ball
    pygame.draw.circle(screen, ball_color, (ball_x, ball_y), ball_radius)

    # Draw the Player Circle
    pygame.draw.circle(screen, player_color, (player_x, player_y), player_radius)

    # 5. Control Speed and Update Display
    
    clock.tick(FPS) 
    pygame.display.flip()

# Quit Pygame
pygame.quit()
sys.exit()