//
//  File.swift
//  
//
//  Created by Francisco Guerrero Escamilla on 27/07/23.
//

import Foundation
import RookAppleHealth

/// The Access point all the event health data managed by RookAppleHealth
///
/// Use `RookAHPermissionManager` object to request permission to read  health data from Health kit.
/// Once permission is granted, you can use the `RookAHEventExtractionManager` to fetch all events data
final public class RookAHEventExtractionManager {
  
  // MARK:  Properties
  
  fileprivate let eventManager: RookExtractionEventManager = RookExtractionEventManager()
  
  // MARK:  Init
  
  public init() {
  }
  
  // MARK:  Helpers
  
  ///Returns `[RookHeartRateEvent]` an array of objects with all the data of the heart rate events while the user was in a physical activity
  ///
  /// - parameter date: The Date to fetch the heart rate events
  /// - parameter completion: Completion block that containts a result with the events data or an error
  public func getPhysicalHeartRateEvents(date: Date,
                                         completion: @escaping(Result<[RookHeartRateEvent],Error>) -> Void) {
    self.eventManager.getPhysicalHeartRateEvents(date: date,
                                            completion: completion)
  }
  
  ///Returns `[RookHeartRateEvent]` an array of objects with all the data of the heart rate events while the user was not in a physical activity
  ///
  /// - parameter date: The Date to fetch the heart rate events
  /// - parameter completion: Completion block that containts a result with the events data or an error
  public func getBodyHeartRateEvents(date: Date,
                                     completion: @escaping(Result<[RookHeartRateEvent],Error>) -> Void) {
    self.eventManager.getBodyHeartRateEvents(date: date,
                                             completion: completion)
  }
  
  ///Returns `[RookOxygentationEvent]` an array of objects with all the data of the oxygenation events while the user was in a physical activity
  ///
  /// - parameter date: The Date to fetch the heart rate events
  /// - parameter completion: Completion block that containts a result with the events data or an error
  public func getPhysicalOxygenationEvents(date: Date,
                                           completion: @escaping(Result<[RookOxygentationEvent],Error>) -> Void) {
    self.eventManager.getPhysicalOxygenationEvents(date: date,
                                                   completion: completion)
  }
  
  ///Returns `[RookOxygentationEvent]` an array of objects with all the data of the oxygenation events while the user was not in a physical activity
  ///
  /// - parameter date: The Date to fetch the heart rate events
  /// - parameter completion: Completion block that containts a result with the events data or an error
  public func getBodyOxygenationEvents(date: Date,
                                       completion: @escaping(Result<[RookOxygentationEvent],Error>) -> Void) {
    self.eventManager.getBodyOxygenationEvents(date: date,
                                               completion: completion)
  }

  ///Returns `[RookActivityEvent]` an array of objects with all the data of the activity events 
  ///
  /// - parameter date: The Date to fetch the heart rate events
  /// - parameter completion: Completion block that containts a result with the events data or an error
  public func getActivityEvents(date: Date,
                                completion: @escaping (Result<[RookActivityEvent], Error>) -> Void) {
    self.eventManager.getActivityEvents(date: date,
                                        completion: completion)
  }
  
  /// Returns the last extraction date of the summary or event provided
  ///
  /// - parameter summary: `RookDataType` enum object to select the summary type, it could be sleepSummary, physicalSummary, bodySummaryheartRateBodyEvent, heartRatePhysicalEvent, oxygenationBodyEvent, oxygenationPhysicalEvent or activityEvent
  public func getLastExtractionDate(of type: RookDataType) -> Date? {
    return self.eventManager.getLastExtractionDate(of: type)
  }
}
