import pygame

pygame.init()  # 초기화 (반드시 필요) pygmae import하면 무조건

# 화면 크기 설정
screen_width = 480  # 가로 크기
screen_height = 640  # 세로 크기
screen = pygame.display.set_mode((screen_width, screen_height))

# 화면 타이틀 설정
pygame.display.set_caption("Nado Game")  # 게임 이름

# 이벤트 루프
running = True  # 게임이 진행중인가?
while running:
    for event in pygame.event.get():  # 무조건 적기 # 어떤 이벤트가 발생하였는가?
        # 이쪽에 코드를 써서 게임이 실행되게 함 게임 동작을 하는 곳
        if event.type == pygame.QUIT:  # 창을 닫는 이벤트가 발생하였는가?
            running = False  # 게임이 진행 중이 아님

# pygmae 종료
pygame.quit()
