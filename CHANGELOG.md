# Changelog

## 0.0.1

* Initial release.

## 1.0.1

* Fix error with getPhysicalSummary when the user's records are empty

## 1.0.6

* setEnvironment method was added it is recommended to set this to match the correct type.

* The spelling of getSleepSummary and requestBodyPermissions methods was fixed

## 1.0.9

* setConfiguration method ask for your secrete key
  
* getTemperatureEvents was added to RookAHEventExtractionManager

* getBloodPressureEvents was added to RookAHEventExtractionManager

* getGlucoseEvents was added to RookAHEventExtractionManager

## 1.0.10

*  if the data of a physical summary is empty the method will return an error

*  if the data of a body summary is empty the method will return an error

## 1.1.0

*  sleep data from external data source is accepted
