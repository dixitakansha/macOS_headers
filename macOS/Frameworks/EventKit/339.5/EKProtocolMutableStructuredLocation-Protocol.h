//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKProtocolMutableObject-Protocol.h>
#import <EventKit/EKProtocolStructuredLocation-Protocol.h>

@class NSNumber, NSString;

@protocol EKProtocolMutableStructuredLocation <EKProtocolStructuredLocation, EKProtocolMutableObject>
@property(copy, nonatomic) NSString *routeType;
@property(copy, nonatomic) NSString *geoURLString;
@property(copy, nonatomic) NSString *abURLString;
@property(copy, nonatomic) NSNumber *radiusNumber;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *address;
@end

