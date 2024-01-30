import pygame
import random

# ゲームの初期化
pygame.init()

# ゲームウィンドウのサイズ
screen_width = 800
screen_height = 600
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("東方風ゲーム")

# ゲームのフレームレート
clock = pygame.time.Clock()

# 色の定義
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)

#Bulletクラス
class Bullet(pygame.sprite.Sprite):
    def __init__(self, x, y):
        super().__init__()
        self.image = pygame.Surface([10, 10])
        self.image.fill((0, 255, 0))
        self.rect = self.image.get_rect()
        self.rect.x = x
        self.rect.y = y
        self.speed_y = -5

    def update(self):
        self.rect.y += self.speed_y
        if self.rect.bottom < 0:
            self.kill()

# プレイヤークラス
class Player(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.Surface([50, 50])
        self.image.fill(WHITE)
        self.rect = self.image.get_rect()
        self.rect.x = screen_width // 2
        self.rect.y = screen_height - 100
        self.speed_x = 0
        self.speed_y = 0

    def update(self):
        self.rect.x += self.speed_x
        self.rect.y += self.speed_y
        if self.rect.left < 0:
            self.rect.left = 0
        elif self.rect.right > screen_width:
            self.rect.right = screen_width
        if self.rect.top < 0:
            self.rect.top = 0
        elif self.rect.bottom > screen_height:
            self.rect.bottom = screen_height

    def shoot(self):
        new_bullet = Bullet(self.rect.centerx, self.rect.top)
        all_sprites.add(bullet)
        bullets.add(bullet)

# 敵キャラクタークラス
class Enemy(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()
        self.image = pygame.Surface([30, 30])
        self.image.fill((255, 0, 0))
        self.rect = self.image.get_rect()
        self.rect.x = random.randint(0, screen_width - self.rect.width)
        self.rect.y = random.randint(-100, -40)
        self.speed_y = random.randint(1, 3)

    def update(self):
        self.rect.y += self.speed_y
        if self.rect.top > screen_height:
            self.rect.x = random.randint(0, screen_width - self.rect.width)
            self.rect.y = random.randint(-100, -40)
            self.speed_y

# スプライトグループの作成
all_sprites = pygame.sprite.Group()
enemies = pygame.sprite.Group()
bullets = pygame.sprite.Group()

# プレイヤーオブジェクトの作成
player = Player()
all_sprites.add(player)

# 敵キャラクターオブジェクトの作成
for _ in range(10):
    enemy = Enemy()
    all_sprites.add(enemy)
    enemies.add(enemy)



# ゲームオーバーのフラグ
game_over = False

# ゲームループ
while not game_over:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            game_over = True

        # キー入力の処理
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                player.speed_x = -5
            elif event.key == pygame.K_RIGHT:
                player.speed_x = 5
            elif event.key == pygame.K_UP:
                player.speed_y = -5
            elif event.key == pygame.K_DOWN:
                player.speed_y = 5
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:
                player.speed_x = 0
            if event.key == pygame.K_UP or event.key == pygame.K_DOWN:
                player.speed_y = 0
        # スペースキーで射撃
            elif event.key == pygame.K_SPACE:
                player.shoot() 

    # スプライトの更新
    all_sprites.update()

    # 衝突検出
    hits = pygame.sprite.spritecollide(player, enemies, False)
    if hits:
        game_over = True
    # 弾と敵キャラクターの衝突検出
    for bullet in bullets:
        hits = pygame.sprite.spritecollide(bullet, enemies, True)
    for hit in hits:
        bullet.kill()

    # 描画処理
    screen.fill(BLACK)
    all_sprites.draw(screen)
    pygame.display.flip()

    # フレームレートの設定
    clock.tick(60)


# ゲーム終了時の処理
pygame.quit()
