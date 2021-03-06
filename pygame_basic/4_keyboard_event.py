import pygame

pygame.init()  # 초기화 (반드시 필요) pygmae import하면 무조건

# 화면 크기 설정
screen_width = 480  # 가로 크기
screen_height = 640  # 세로 크기
screen = pygame.display.set_mode((screen_width, screen_height))

# 화면 타이틀 설정
pygame.display.set_caption("Nado Game")  # 게임 이름

# 배경 이미지 불러오기
background = pygame.image.load("C:/Users/Nahyun/pygame_basic/background.png")

# 캐릭터(스프라이트) 블러오기
character = pygame.image.load("C:/Users/Nahyun/pygame_basic/character.png")
character_size = character.get_rect().size  # 이미지의 크기를 구해옴
charater_width = character_size[0]  # 캐릭터의 가로 크기
charater_height = character_size[1]  # 캐릭터의 세로 크기
character_x_pos = (screen_width - charater_width) / \
    2  # 화면 가로의 절반 크기에 해당하는 곳에 위치 (가로)
# 화면 세로 크기 가장 아래에 해당하는 곳에 위치 (세로)
character_y_pos = screen_height - charater_height

# 이동할 좌표
to_x = 0
to_y = 0

# 이벤트 루프
running = True  # 게임이 진행중인가?
while running:
    for event in pygame.event.get():  # 무조건 적기 # 어떤 이벤트가 발생하였는가?
        # 이쪽에 코드를 써서 게임이 실행되게 함 게임 동작을 하는 곳
        if event.type == pygame.QUIT:  # 창을 닫는 이벤트가 발생하였는가?
            running = False  # 게임이 진행 중이 아님

        if event.type == pygame.KEYDOWN:  # 키가 눌러졌는지 확인
            if event.key == pygame.K_LEFT:  # 캐릭터를 왼쪽으로
                to_x -= 1
            elif event.key == pygame.K_RIGHT:  # 캐릭터를 오른쪽으로
                to_x += 1
            elif event.key == pygame.K_UP:  # 캐릭터를 위쪽으로
                to_y -= 1
            elif event.key == pygame.K_DOWN:  # 캐릭터를 아래쪽으로
                to_y += 1

        if event.type == pygame.KEYUP:  # 방향키를 떼면 멈춤
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                to_x = 0  # 좌표를 더 이상 움직이지 않음
            elif event.key == pygame.K_UP or event.key == pygame.K_DOWN:
                to_y = 0

    character_x_pos += to_x
    character_y_pos += to_y

    # 화면을 벗어나지 않게 만듦
    # 가로 경계값 처리
    if character_x_pos < 0:
        character_x_pos = 0
    elif character_x_pos > screen_width - charater_width:
        character_x_pos = screen_width - charater_width

    # 세로 경계값 처리
    if character_y_pos < 0:
        character_y_pos = 0
    elif character_y_pos > screen_height - charater_height:
        character_y_pos = screen_height - charater_height

    screen.blit(background, (0, 0))  # 배경 그리기

    screen.blit(character, (character_x_pos,
                character_y_pos))
    # while부분을 계속 돌면서 계속해서 그리기 이게 없으면 이미지가 안 나옴
    pygame.display.update()  # 게임화면을 다시 그리기! 반드시

# pygmae 종료
pygame.quit()
