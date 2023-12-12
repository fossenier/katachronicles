package kata_test

import (
	"testing"

	solution "github.com/fossenier/katachronicles/tree/main/codewars/8kyu/jhoffner/kata-3"
	"github.com/stretchr/testify/assert"
)

func TestSolution(t *testing.T) {
	t.Run("should return the reversed string", func(t *testing.T) {
		assert.Equal(t, "dlrow", solution.Solution("world"))
		assert.Equal(t, "tseet", solution.Solution("teest"))
	})
}
