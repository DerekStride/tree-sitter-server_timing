import XCTest
import SwiftTreeSitter
import TreeSitterServerTiming

final class TreeSitterServerTimingTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_server_timing())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading ServerTiming grammar")
    }
}
