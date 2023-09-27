package kata

import "strings"

func duplicate_count(s1 string) int {
	tally := make(map[rune]int)
	duplicates := 0

	for _, r := range strings.ToLower(s1) {
		tally[r]++
	}

	for _, j := range tally {
		if j >= 2 {
			duplicates += 1
		}
	}

	return duplicates
}
