//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/CBCentralManagerDelegate-Protocol.h>

@class NSString;

@interface CBConnectionsObserver : NSObject <CBCentralManagerDelegate>
{
    int _maxHAPConnections;
}

@property int maxHAPConnections; // @synthesize maxHAPConnections=_maxHAPConnections;
- (void)requestStatusUpdate;
- (void)bluetoothStatusNotification:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)getStatus;
- (int)getAvailableHAPConnections;
- (void)cleanupWithError:(id *)arg1;
- (id)initWithCentralManager:(id)arg1 Queue:(id)arg2 Error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

