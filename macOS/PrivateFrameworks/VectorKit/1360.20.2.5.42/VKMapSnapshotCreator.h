//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/MapEngineDelegate-Protocol.h>
#import <VectorKit/VKImageCanvasDelegate-Protocol.h>

@class GEOResourceManifestConfiguration, NSLocale, NSString, VKGlobeImageCanvas, VKMapImageCanvas, VKMemoryObserver;

@interface VKMapSnapshotCreator : NSObject <VKImageCanvasDelegate, MapEngineDelegate>
{
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    long long _mapType;
    CDStruct_51745937 _mapDisplayStyle;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    CDUnknownBlockType _completion;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine>> _mapEngine;
    shared_ptr_e963992e _taskContext;
    unsigned char _emphasis;
    BOOL _didSoftDealloc;
    VKMemoryObserver *_memoryObserver;
}

+ (BOOL)supportsSharingThumbnails;
@property(nonatomic) unsigned char emphasis; // @synthesize emphasis=_emphasis;
@property(nonatomic) CDStruct_51745937 mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nearestVenueDidChange:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (_Bool)wantsTimerTick;
- (void)didPresent;
- (void)willLayoutWithTimestamp:(double)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (void)cancelFlushingTileDecodes:(BOOL)arg1;
- (void)cancel;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderSnapshot:(CDUnknownBlockType)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) BOOL showsVenues;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointLabels;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) BOOL localizeLabels;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
@property(nonatomic) long long mapType;
@property(readonly) struct CGSize size;
- (id)activeCanvas;
- (void)softDealloc;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

