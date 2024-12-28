package tree_sitter_server_timing_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_server_timing "github.com/derekstride/tree-sitter-server_timing/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_server_timing.Language())
	if language == nil {
		t.Errorf("Error loading ServerTiming grammar")
	}
}
