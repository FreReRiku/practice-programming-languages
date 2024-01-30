class MenuItem:
	def info(self, name , price):
		self.name = name
		self.price = price
		print('この商品の名前は' + self.name + 'で、価格は' + str(self.price) + 'です。')

menu_item1 = MenuItem()

menu_item1.info('サンドイッチ', 500)
