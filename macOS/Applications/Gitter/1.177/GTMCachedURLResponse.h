//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSURLResponse;

@interface GTMCachedURLResponse : NSObject
{
    NSURLResponse *response_;
    NSData *data_;
    NSDate *useDate_;
    NSDate *reservationDate_;
}

@property(retain) NSDate *useDate; // @synthesize useDate=useDate_;
@property(retain) NSDate *reservationDate; // @synthesize reservationDate=reservationDate_;
@property(readonly) NSData *data; // @synthesize data=data_;
@property(readonly) NSURLResponse *response; // @synthesize response=response_;
- (long long)compareUseDate:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithResponse:(id)arg1 data:(id)arg2;

@end

