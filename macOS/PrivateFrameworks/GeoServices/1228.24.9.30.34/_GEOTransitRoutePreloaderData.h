//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, NSMutableArray, NSMutableSet, _GEOTransitPreloadCamera;

__attribute__((visibility("hidden")))
@interface _GEOTransitRoutePreloaderData : NSObject
{
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    GEOTileKeyList *_tilesMissed;
    NSMutableSet *_placecardsLoadingOrLoaded;
    NSMutableSet *_placecardsReceived;
    NSMutableSet *_placecardsMissed;
    NSMutableArray *_preloadBatches;
    BOOL _isSufficientlyLoaded;
    unsigned long long _currentBatchGeneration;
    _GEOTransitPreloadCamera *_camera;
}

@property(retain, nonatomic) _GEOTransitPreloadCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) unsigned long long currentBatchGeneration; // @synthesize currentBatchGeneration=_currentBatchGeneration;
@property(nonatomic) BOOL isSufficientlyLoaded; // @synthesize isSufficientlyLoaded=_isSufficientlyLoaded;
@property(retain, nonatomic) NSMutableArray *preloadBatches; // @synthesize preloadBatches=_preloadBatches;
@property(retain, nonatomic) NSMutableSet *placecardsMissed; // @synthesize placecardsMissed=_placecardsMissed;
@property(retain, nonatomic) NSMutableSet *placecardsReceived; // @synthesize placecardsReceived=_placecardsReceived;
@property(retain, nonatomic) NSMutableSet *placecardsLoadingOrLoaded; // @synthesize placecardsLoadingOrLoaded=_placecardsLoadingOrLoaded;
@property(retain, nonatomic) GEOTileKeyList *tilesMissed; // @synthesize tilesMissed=_tilesMissed;
@property(retain, nonatomic) GEOTileKeyList *tilesReceived; // @synthesize tilesReceived=_tilesReceived;
@property(retain, nonatomic) GEOTileKeyList *tilesLoadingOrLoaded; // @synthesize tilesLoadingOrLoaded=_tilesLoadingOrLoaded;
- (void)dealloc;
- (id)init;

@end

