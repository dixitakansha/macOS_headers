//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary, NSString;
@protocol AXDrawable;

@protocol AXBuildEvent
- (void)axSetDrawableToBuild:(id <AXDrawable>)arg1;
- (id <AXDrawable>)axGetDrawableToBuild;
- (void)axSetDelivery:(int)arg1;
- (int)axGetDelivery;
- (void)axSetBuildDuration:(double)arg1;
- (double)axGetBuildDuration;
- (void)axSetBuildStyle:(NSString *)arg1 withProperties:(NSDictionary *)arg2;
- (NSDictionary *)axGetBuildStyleProperties;
- (NSString *)axGetBuildStyleType;
@end

