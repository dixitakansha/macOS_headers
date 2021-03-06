//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPFilterCapableItemProtocol-Protocol.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface IECallHistoryItem : NSObject <MPFilterCapableItemProtocol>
{
    int _type;
    NSDate *_date;
    NSString *_contactAddress;
    double _duration;
    NSString *_service;
}

@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *contactAddress; // @synthesize contactAddress=_contactAddress;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (BOOL)containingElementsMatchString:(id)arg1;
- (id)callTypeIcon;
- (id)callTypeDescription;
- (void)setFromOriginated:(int)arg1 answered:(int)arg2 type:(int)arg3 faceTimeData:(int)arg4 duration:(double)arg5;
- (void)setFromFlags:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

