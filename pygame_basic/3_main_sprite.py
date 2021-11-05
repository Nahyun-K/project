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


# 이벤트 루프
running = True  # 게임이 진행중인가?
while running:
    for event in pygame.event.get():  # 무조건 적기 # 어떤 이벤트가 발생하였는가?
        # 이쪽에 코드를 써서 게임이 실행되게 함 게임 동작을 하는 곳
        if event.type == pygame.QUIT:  # 창을 닫는 이벤트가 발생하였는가?
            running = False  # 게임이 진행 중이 아님

    screen.blit(background, (0, 0))  # 배경 그리기

    screen.blit(character, (character_x_pos,
                character_y_pos))
    # while부분을 계속 돌면서 계속해서 그리기 이게 없으면 이미지가 안 나옴
    pygame.display.update()  # 게임화면을 다시 그리기! 반드시

# pygmae 종료
pygame.quit()
