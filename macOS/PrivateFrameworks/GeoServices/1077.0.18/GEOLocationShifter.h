//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocationShiftFunctionRequest, GEOLocationShiftFunctionResponse, NSLock, NSMutableArray;

@interface GEOLocationShifter : NSObject
{
    GEOLocationShiftFunctionResponse *_shiftFunction;
    BOOL _isRequestingShiftFunction;
    GEOLocationShiftFunctionRequest *_shiftRequest;
    NSLock *_lock;
    NSMutableArray *_locationsToShift;
}

@property(retain, nonatomic) GEOLocationShiftFunctionRequest *shiftRequest; // @synthesize shiftRequest=_shiftRequest;
@property(retain, nonatomic) GEOLocationShiftFunctionResponse *shiftFunction; // @synthesize shiftFunction=_shiftFunction;
- (void)_shiftAndReturnLocations;
- (void)_sendErrorForLocations:(id)arg1;
- (BOOL)_shiftLocation:(id)arg1;
- (BOOL)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 shiftedCoordinate:(CDStruct_c3b9c2ee *)arg3 shiftedAccuracy:(double *)arg4;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 mustGoToNetworkCallback:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 callbackQueue:(struct dispatch_queue_s *)arg6;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_requestShiftFunctionForLocation:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2;
- (void)_countryProvidersDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL locationShiftEnabled;
- (void)dealloc;
- (id)init;

@end

