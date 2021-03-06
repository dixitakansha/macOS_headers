//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController, AKCropTrackingAreaManager, AKGeometryHelper, AKLayerPresentationManager, AKPageModelController, NSView;
@protocol AKControllerDelegateProtocol;

@interface AKPageController : NSObject
{
    BOOL _shouldPixelate;
    BOOL _layerPresentationManagerWasSetup;
    AKController *_controller;
    AKPageModelController *_pageModelController;
    unsigned long long _pageIndex;
    AKGeometryHelper *_geometryHelper;
    AKLayerPresentationManager *_layerPresentationManager;
    NSView *_overlayView;
    AKCropTrackingAreaManager *_cropTrackingAreaManager;
}

+ (id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2;
@property BOOL layerPresentationManagerWasSetup; // @synthesize layerPresentationManagerWasSetup=_layerPresentationManagerWasSetup;
@property(retain, nonatomic) AKCropTrackingAreaManager *cropTrackingAreaManager; // @synthesize cropTrackingAreaManager=_cropTrackingAreaManager;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) AKLayerPresentationManager *layerPresentationManager; // @synthesize layerPresentationManager=_layerPresentationManager;
@property(retain, nonatomic) AKGeometryHelper *geometryHelper; // @synthesize geometryHelper=_geometryHelper;
@property BOOL shouldPixelate; // @synthesize shouldPixelate=_shouldPixelate;
@property unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain) AKPageModelController *pageModelController; // @synthesize pageModelController=_pageModelController;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (double)modelBaseScaleFactor;
- (id)annotationsBeneathLoupe:(id)arg1;
- (id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(struct CGRect)arg2 forLoupeAnnotation:(id)arg3;
- (struct CGRect)maxPageRect;
- (struct CGRect)convertRectFromModelToOverlay:(struct CGRect)arg1;
- (struct CGRect)convertRectFromOverlayToModel:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromModelToOverlay:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromOverlayToModel:(struct CGPoint)arg1;
@property(readonly) id <AKControllerDelegateProtocol> delegate;
- (long long)currentModelToScreenExifOrientation;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (void)overlayWasAddedToSuperview;
- (BOOL)relinquishablesAreLoaded;
- (void)releaseRelinquishables;
- (void)setupRelinquishables;
- (void)teardown;
- (id)initForTesting;
- (id)_initWithController:(id)arg1 andPageModelController:(id)arg2;

@end

