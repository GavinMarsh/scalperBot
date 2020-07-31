//
// InsuranceAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation
import Alamofire



open class InsuranceAPI {
    /**
     Get insurance fund history.
     
     - parameter symbol: (query) Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
     - parameter filter: (query) Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
     - parameter columns: (query) Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
     - parameter count: (query) Number of results to fetch. (optional, default to 100)
     - parameter start: (query) Starting point for results. (optional, default to 0)
     - parameter reverse: (query) If true, will sort results newest first. (optional, default to false)
     - parameter startTime: (query) Starting date filter for results. (optional)
     - parameter endTime: (query) Ending date filter for results. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func insuranceGet(symbol: String? = nil, filter: String? = nil, columns: String? = nil, count: Double? = nil, start: Double? = nil, reverse: Bool? = nil, startTime: Date? = nil, endTime: Date? = nil, completion: @escaping ((_ data: [Insurance]?,_ error: Error?) -> Void)) {
        insuranceGetWithRequestBuilder(symbol: symbol, filter: filter, columns: columns, count: count, start: start, reverse: reverse, startTime: startTime, endTime: endTime).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     Get insurance fund history.
     - GET /insurance
     - examples: [{contentType=application/json, example=[ {
  "walletBalance" : 0.80082819046101150206595775671303272247314453125,
  "currency" : "currency",
  "timestamp" : "2000-01-23T04:56:07.000+00:00"
}, {
  "walletBalance" : 0.80082819046101150206595775671303272247314453125,
  "currency" : "currency",
  "timestamp" : "2000-01-23T04:56:07.000+00:00"
} ]}]
     
     - parameter symbol: (query) Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
     - parameter filter: (query) Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
     - parameter columns: (query) Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
     - parameter count: (query) Number of results to fetch. (optional, default to 100)
     - parameter start: (query) Starting point for results. (optional, default to 0)
     - parameter reverse: (query) If true, will sort results newest first. (optional, default to false)
     - parameter startTime: (query) Starting date filter for results. (optional)
     - parameter endTime: (query) Ending date filter for results. (optional)

     - returns: RequestBuilder<[Insurance]> 
     */
    open class func insuranceGetWithRequestBuilder(symbol: String? = nil, filter: String? = nil, columns: String? = nil, count: Double? = nil, start: Double? = nil, reverse: Bool? = nil, startTime: Date? = nil, endTime: Date? = nil) -> RequestBuilder<[Insurance]> {
        let path = "/insurance"
        let URLString = SwaggerClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "symbol": symbol, 
            "filter": filter, 
            "columns": columns, 
            "count": count, 
            "start": start, 
            "reverse": reverse, 
            "startTime": startTime?.encodeToJSON(), 
            "endTime": endTime?.encodeToJSON()
        ])

        let requestBuilder: RequestBuilder<[Insurance]>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

}