//
// OrderBookL2.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation



public struct OrderBookL2: Codable {

    public var symbol: String
    public var _id: Double
    public var side: String
    public var size: Double?
    public var price: Double?

    public init(symbol: String, _id: Double, side: String, size: Double?, price: Double?) {
        self.symbol = symbol
        self._id = _id
        self.side = side
        self.size = size
        self.price = price
    }

    public enum CodingKeys: String, CodingKey { 
        case symbol
        case _id = "id"
        case side
        case size
        case price
    }


}

