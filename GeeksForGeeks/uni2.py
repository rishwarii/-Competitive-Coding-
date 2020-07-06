import unittest
import uni

class test(unittest.TestCase):
	def testone(self):
		text='pyton'
		result = uni.cap_test(text)
		self.assertEqual(result,'Python')
	def test2(unittest.TestCase):
		text = 'monty pypu'
		result = uni.cap_test(test)
		self.assertEqual(result,'Monty Pypu')

if __name__ == '__main__':
	unittest.main() 
							

