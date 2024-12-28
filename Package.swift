// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterServerTiming",
    products: [
        .library(name: "TreeSitterServerTiming", targets: ["TreeSitterServerTiming"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterServerTiming",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterServerTimingTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterServerTiming",
            ],
            path: "bindings/swift/TreeSitterServerTimingTests"
        )
    ],
    cLanguageStandard: .c11
)
