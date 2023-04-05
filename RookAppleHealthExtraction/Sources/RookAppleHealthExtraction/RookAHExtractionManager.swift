//
//  File.swift
//  
//
//  Created by Francisco Guerrero Escamilla on 31/03/23.
//

import Foundation
import RookAppleHealth

/// The Access point all the health data managed by RookAppleHealth
///
/// Use `RookAHPermissionManager` object to request permission to read  health data from Health kit.
/// Once permission is granted, you can use the `RookAHExtractionManager` to read sleep, physical or body summaries.
final public class RookAHExtractionManager {
  
  // MARK:  Properties
  
  fileprivate let extractionManager: RookExtractionManager = RookExtractionManager()
  
  // MARK:  Init
  
  public init() {
    
  }
  
  // MARK:  Helpers
  
  ///Returns `RookSleepData` object with sleep data of the date provided
  ///
  /// - parameter date: The Date to fetch the sleep data
  /// - parameter completion: Completion block that containts a result with the sleep data or an error
  public func getSleepSummay(date: Date,
                             completion: @escaping (Result<RookSleepData?, Error>) -> Void) {
    self.extractionManager.getSleepSummay(date: date,
                                          completion: completion)
  }
  
  
  ///Returns `RookPhysicalData` object with physical data of the date provided
  ///
  /// - parameter date: The Date to fetch the physical data
  /// - parameter completion: Completion block that containts a result with the physical data or an error
  public func getPhysicalSummary(date: Date,
                                 completion: @escaping (Result<RookPhysicalData, Error>) -> Void) {
    self.extractionManager.getPhysicalSummary(date: date,
                                              completion: completion)
  }
  
  ///Returns `RookBodyData` object with body data of the date provided
  ///
  /// - parameter date: The Date to fetch the body data
  /// - parameter completion: Completion block that containts a result with the body data or an error
  public func getBodySummary(date: Date,
                             completion: @escaping (Result<RookBodyData, Error>) -> Void) {
    self.extractionManager.getBodySummary(date: date,
                                          completion: completion)
  }
  
  /// Returns the last extraction date of the summary provided
  ///
  /// - parameter summary: `RookDataType` enum object to select the summary type, it could be sleepSummary, physicalSummary or bodySummary
  public func getLastExtractionDate(of summary: RookDataType) -> Date? {
    self.extractionManager.getLastExtractionDate(of: summary)
  }
  
}
