//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WirelessProximity/WPClient.h>

@protocol WPAirPlaySoloDelegate;

@interface WPAirPlaySolo : WPClient
{
    id <WPAirPlaySoloDelegate> _delegate;
}

+ (id)puckTypeToString:(unsigned char)arg1;
+ (unsigned char)puckStringToType:(id)arg1;
@property(nonatomic) __weak id <WPAirPlaySoloDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)peerTrackingAvailable;
- (void)peerTrackingFull;
- (void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)deviceDiscovered:(id)arg1;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)stopTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)startTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)stopConnectionlessScanningWithData:(id)arg1;
- (void)startConnectionlessScanningWithData:(id)arg1;
- (void)stopConnectionlessAdvertising:(id)arg1;
- (void)stopConnectionlessAdvertising;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (void)invalidate;
- (id)clientAsString;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

