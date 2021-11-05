import pygame
###################################################################
# <기봊 초기화 (반드시 해야 하는 것들)>
pygame.init()  # 초기화 (반드시 필요) pygmae import하면 무조건

# 화면 크기 설정
screen_width = 640  # 가로 크기
screen_height = 480  # 세로 크기
screen = pygame.display.set_mode((screen_width, screen_height))

# 화면 타이틀 설정
pygame.display.set_caption("Game")  # 게임 이름

# 초당 프레임 수가 높으면 캐릭터 움직임이 더 부드라움 낮으면 덜 부드러움
#  FPS
clock = pygame.time.Clock()
###################################################################

# 1. 사용자 게임 초기화 (배경 화면, 게임 이미자. 좌표, 속도, 폰트 등) 785 480
background = pygame.image.load(
    "C:\\Users\\Nahyun\\pygame_basic\\background_game.png")

character = pygame.image.load("C:/Users/Nahyun/pygame_basic/character.png")
character_size = character.get_rect().size
character_width = character_size[0]
character_height = character_size[1]
character_x_pos = (screen_width - character_width) / 2
character_y_pos = screen_height - character_height

to_x = 0
to_y = 0
character_speed = 0.6

enemy = pygame.image.load("C:/Users/Nahyun/pygame_basic/enemy.png")
enemy_size = enemy.get_rect().size
enemy_width = enemy_size[0]
enemy_height = enemy_size[1]
enemy_x_pos = (screen_width - character_width) / 2
enemy_y_pos = (screen_height - character_height) / 2

bullet = pygame.image.load("C:/Users/Nahyun/pygame_basic/bullet.png")
bullet_size = bullet.get_rect().size
bullet_width = bullet_size[0]
bullet_height = bullet_size[1]
bullet_x_pos = character_x_pos
bullet_y_pos = character_y_pos

bullet_x = 0
bullet_y = 0
bullet_speed = 0.6


# 이벤트 루프
running = True
while running:
    dt = clock.tick(30)

    # 2. 이벤트 처리 (키보드, 마우스 등)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

        if event.type == pygame.KEYDOWN:  # 키가 눌러졌는지 확인
            if event.key == pygame.K_LEFT:  # 캐릭터를 왼쪽으로
                to_x -= character_speed
            elif event.key == pygame.K_RIGHT:  # 캐릭터를 오른쪽으로
                to_x += character_speed
            elif event.key == pygame.K_SPACE:
                bullet_y += bullet_speed

        if event.type == pygame.KEYUP:  # 방향키를 떼면 멈춤
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                to_x = 0  # 좌표를 더 이상 움직이지 않음

    character_x_pos += to_x * dt

    if character_x_pos < 0:
        character_x_pos = 0
    elif character_x_pos > screen_width - character_width:
        character_x_pos = screen_width - character_width

    bullet_x_pos = character_x_pos
    bullet_y_pos = character_y_pos
    bullet_y_pos -= bullet_y * dt

    # 3. 게임 캐릭터 위치 정의

    # 4. 충돌 처리
    bullet_rect = bullet.get_rect()
    bullet_rect.left = bullet_x_pos
    bullet_rect.top = bullet_y_pos

    enemy_rect = enemy.get_rect()
    enemy_rect.left = enemy_x_pos
    enemy_rect.top = enemy_y_pos

    if bullet_rect.colliderect(enemy_rect):
        enemy_width = enemy_size[0] / 2
        enemy_height = enemy_size[1] / 2
        print("충돌했어요")
        if enemy_width < 10:
            running = False

    # 5. 화면에 그리기
    screen.blit(background, (0, 0))
    screen.blit(character, (character_x_pos, character_y_pos))
    screen.blit(enemy, (enemy_x_pos, enemy_y_pos))
    screen.blit(bullet, (bullet_x_pos, bullet_y_pos))
    pygame.display.update()


# pygmae 종료
pygame.quit()
