import pygame
import random
###################################################################
# <기봊 초기화 (반드시 해야 하는 것들)>
pygame.init()  # 초기화 (반드시 필요) pygmae import하면 무조건

# 화면 크기 설정
screen_width = 480  # 가로 크기
screen_height = 640  # 세로 크기
screen = pygame.display.set_mode((screen_width, screen_height))

# 화면 타이틀 설정
pygame.display.set_caption("게임 이름")  # 게임 이름

# 초당 프레임 수가 높으면 캐릭터 움직임이 더 부드라움 낮으면 덜 부드러움
#  FPS
clock = pygame.time.Clock()
###################################################################

# 1. 사용자 게임 초기화 (배경 화면, 게임 이미자. 좌표, 속도, 폰트 등)
background = pygame.image.load("C:/Users/Nahyun/pygame_basic/background.png")

# 캐릭터(스프라이트) 블러오기
character = pygame.image.load("C:/Users/Nahyun/pygame_basic/character.png")
character_size = character.get_rect().size  # 이미지의 크기를 구해옴
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
enemy_x_pos = random.randrange(0, screen_width - character_width)
enemy_y_pos = -character_height

# 이벤트 루프
running = True
while running:
    dt = clock.tick(30)

    # 2. 이벤트 처리 (키보드, 마우스 등)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                to_x -= character_speed
            elif event.key == pygame.K_RIGHT:
                to_x += character_speed
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                to_x = 0
    character_x_pos += to_x * dt
    character_y_pos += to_y * dt

    if character_x_pos < 0:
        character_x_pos = 0
    elif character_x_pos > screen_width - character_width:
        character_x_pos = screen_width - character_width

    enemy_y_pos += 5

    # 3. 게임 캐릭터 위치 정의

    # 4. 충돌 처리
    # 충돌 처리를 위한 rect 정보 업데이트
    character_rect = character.get_rect()
    character_rect.left = character_x_pos
    character_rect.top = character_y_pos

    enemy_rect = enemy.get_rect()
    enemy_rect.left = enemy_x_pos
    enemy_rect.top = enemy_y_pos

    # 출돌 체크
    if character_rect.colliderect(enemy_rect):
        print("충돌했어요")
        running = False

    # 5. 화면에 그리기
    screen.blit(background, (0, 0))  # 배경 그리기
    screen.blit(character, (character_x_pos,  character_y_pos))
    screen.blit(enemy, (enemy_x_pos, enemy_y_pos))

    pygame.display.update()


# pygmae 종료
pygame.quit()
