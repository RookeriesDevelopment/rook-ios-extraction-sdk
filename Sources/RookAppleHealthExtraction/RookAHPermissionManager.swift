//
//  File.swift
//  
//
//  Created by Francisco Guerrero Escamilla on 31/03/23.
//

import Foundation
import RookAppleHealth

/// The Access point request permissions to apple health
///
/// Use `RookAHPermissionManager` object to request permission to read  health data from Health kit.
/// Once permission is granted, you can use the `RookAHExtractionManager` to read sleep, physical or body summaries.
public final class RookAHPermissionManager {
  
  // MARK:  Properties
  
  fileprivate let permissionManager: RookPermissionExtraction = RookPermissionExtraction()
  
  // MARK:  Init
  
  public init() {
    
  }
  
  // MARK:  Helpers
  
  /// HealthKit performs these requests asynchronously. If you call this method the system automatically displays the permission form, listing all the requested permissions
  ///
  ///  Use this method to ask permission for all the data types
  public func requestAllPermissions(completion: @escaping (Result<Bool, Error>) -> Void) {
    permissionManager.requestAllPermissions(completion: completion)
  }
  
  /// HealthKit performs these requests asynchronously. If you call this method the system automatically displays the permission form, listing all the requested permissions
  ///
  ///  Use this method to ask permission for sleep the data types
  public func requestSleepPermissions(completion: @escaping (Result<Bool, Error>) -> Void) {
    permissionManager.requestSleepPermissions(completion: completion)
  }
  
  /// HealthKit performs these requests asynchronously. If you call this method the system automatically displays the permission form, listing all the requested permissions
  ///
  ///  Use this method to ask permission for physical the data types
  public func requestPhysicalPermissions(completion: @escaping (Result<Bool, Error>) -> Void) {
    permissionManager.requestPhysicalPermissions(completion: completion)
  }
  
  /// HealthKit performs these requests asynchronously. If you call this method the system automatically displays the permission form, listing all the requested permissions
  ///
  ///  Use this method to ask permission for body the data types
  public func requesBodyPermissions(completion: @escaping (Result<Bool, Error>) -> Void) {
    permissionManager.requesBodyPermissions(completion: completion)
  }
  
}
