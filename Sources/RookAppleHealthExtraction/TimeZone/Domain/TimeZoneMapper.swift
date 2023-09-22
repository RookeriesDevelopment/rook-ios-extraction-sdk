//
//  TimeZoneMapper.swift
//  
//
//  Created by Francisco Guerrero Escamilla on 22/09/23.
//

import Foundation
import RookAppleHealth

struct TimeZoneMapper {
  
  static func mapTimeZone(_ timezone: UserTimeZone) -> RookUserTimeZone {
    return RookUserTimeZone(
      timeZone: timezone.timeZone,
      offset: timezone.offset)
  }
  
}
