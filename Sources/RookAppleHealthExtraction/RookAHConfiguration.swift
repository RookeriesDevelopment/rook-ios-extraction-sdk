//
//  File.swift
//  
//
//  Created by Francisco Guerrero Escamilla on 10/03/23.
//

import Foundation
import RookAppleHealth

/// `RookAHConfiguration` configures the sdk before start using the sdk set your client uuid and init the sdk
///
/// Use the shared property to access the class
public final class RookAHConfiguration {
  
  ///Returns the shated RookAHConfiguration object
  public static let shared: RookAHConfiguration = RookAHConfiguration()
  
  /// Sets your client uuid to configure the sdk
  public func setClientUUID(with uuid: String) {
    RookAuthAppleHealth.shared.setClientUUID(with: uuid)
  }
  
  /// Sets your environment to configure the sdk
  public func setEnvironment(_ environment: RookExtractionEnvironment) {
    RookAuthAppleHealth.shared.setEnvironment(environment)
  }
  
  /// Initializes the rook apple health sdk
  /// first you have to set your client uuid
  public func initRookAH() {
    RookAuthAppleHealth.shared.initRookAH()
  }
  
  ///Return a `Bool` indicating if the sdk is available
  public func isAHAvailable() -> Bool {
    RookAuthAppleHealth.shared.isAHAvailable()
  }
}
