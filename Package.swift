// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "RookAppleHealthExtraction",
    
    platforms: [
      .iOS(.v13)
    ],
    
    products: [
        .library(
            name: "RookAppleHealthExtraction",
            targets: ["RookAppleHealthExtraction"]),
    ],
    
    dependencies: [
    ],
    
    targets: [
        
      .target(name: "RookAppleHealthExtraction",
              dependencies: ["RookAppleHealth"],
              cxxSettings: [
                .headerSearchPath("include")
              ]
             ),
      
        .binaryTarget(name: "RookAppleHealth",
                      path: "RookAppleHealth/RookAppleHealth.xcframework")
    ]
)
