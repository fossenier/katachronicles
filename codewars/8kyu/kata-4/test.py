import unittest
from solution import past


class TestPastMethod(unittest.TestCase):
    def test_basic_cases(self):
        self.assertEqual(past(0, 1, 1), 61000)
        self.assertEqual(past(1, 1, 1), 3661000)
        self.assertEqual(past(0, 0, 0), 0)
        self.assertEqual(past(1, 0, 1), 3601000)
        self.assertEqual(past(1, 0, 0), 3600000)


if __name__ == "__main__":
    unittest.main()
