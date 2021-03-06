//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "EventInterrogatorProtocol-Protocol.h"
#import "IPMapEditCalloutViewControllerDelegate-Protocol.h"
#import "RKMapControllerDelegate-Protocol.h"

@class FlipRolloverView, FlippedViewTextField, IPKModule, IPKPopOverWindow, IPMessageReceiver, IWPhotoMapTitleView, ImageDB, LocationCompletionMenu, NSButton, NSDictionary, NSInvocationOperation, NSMutableArray, NSOperationQueue, NSString, NSTimer, NSTrackingArea, NSView, RKMapController;

@interface IWPhotoMapController : NSObject <EventInterrogatorProtocol, RKMapControllerDelegate, IPMapEditCalloutViewControllerDelegate>
{
    NSObject *_contentViewController;
    ImageDB *mImageDB;
    RKMapController *_mapController;
    NSView *_photoMapView;
    NSView *_mapMaskView;
    NSView *_noInfoPlaceholderView;
    NSView *_offlinePlaceholderView;
    int mMapMode;
    NSInvocationOperation *mOperationMakeMapsLoadFaster;
    NSOperationQueue *mMakeMapsFasterOperationQueue;
    BOOL mDraggedAnnotationWasSelected;
    struct IPPhotoList *mPhotoList;
    NSDictionary *mPlacesForVersionIds;
    vector_a4032abb *mEventVector;
    LocationCompletionMenu *mLocationCompletion;
    IPKPopOverWindow *mLocationCompletionWindow;
    NSString *mPlacesLabelString;
    NSButton *mArrowButton;
    NSButton *mLocationClearButton;
    BOOL shouldAutoComplete;
    BOOL _endModal;
    BOOL mReverseGeoLookupEnabled;
    IWPhotoMapTitleView *mCustomTitleView;
    FlippedViewTextField *mCustomTitleLabel;
    FlipRolloverView *mCustomTitleRolloverView;
    double mStartingLabelWidth;
    NSButton *_terrainButton;
    NSButton *_hybridButton;
    NSButton *_satelliteButton;
    NSView *mNavigationControl;
    NSTrackingArea *mMapTrackingArea;
    IPMessageReceiver *mDBMessageReceiver;
    BOOL subscribedToNotifications;
    BOOL mightBeStale;
    NSMutableArray *mPhotoMapObjects;
    IPKModule *mModule;
    NSTimer *delayTimer;
    BOOL mIsAnimating;
    BOOL mIsReadonly;
    BOOL mIsUpdatingUI;
}

+ (void)switchSpanCacheToDB:(id)arg1;
+ (id)spanCache;
+ (void)setMapType:(unsigned long long)arg1;
+ (unsigned long long)mapType;
@property BOOL readonly; // @synthesize readonly=mIsReadonly;
- (void)_renameLocationTo:(id)arg1 forPhotoInfo:(struct IPPhotoInfo *)arg2;
- (void)_setEmptyLocation;
- (id)_placesListForPhotoList:(struct IPPhotoList *)arg1;
- (void)_setPlaceOnInfo:(struct IPPhotoInfo *)arg1 withDictionary:(id)arg2;
- (id)_placeDictionaryForPhoto:(struct IPPhotoInfo *)arg1;
- (id)_placesForVersionIds;
- (void)_invalidatePlacesForVersionIds;
- (BOOL)_arePhotosInSameLocation:(struct IPPhotoList *)arg1;
- (id)_commonLocationNameForPhotos:(struct IPPhotoList *)arg1 wantFullHierarchy:(BOOL)arg2;
- (id)_lowestCommonLocationForPhotos:(struct IPPhotoList *)arg1;
- (BOOL)_reverseGeoLookupEnabled;
- (void)renameLocationTo:(id)arg1;
- (void)viewController:(id)arg1 confirmedNameChangeTo:(id)arg2 forAnnotation:(id)arg3;
- (void)mapViewNetworkBecameAvailable:(id)arg1;
- (void)mapViewNetworkBecameUnavailable:(id)arg1;
- (id)mapView:(id)arg1 calloutViewControllerForSelectedAnnotation:(id)arg2;
- (void)mapView:(id)arg1 selectedAnnotations:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 annotationWasMoved:(id)arg2 snappedToGPSTrack:(id)arg3 type:(int)arg4;
- (void)mapView:(id)arg1 annotationIsAboutToBeMoved:(id)arg2;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)collapseDidStartForModule:(id)arg1;
- (void)animationDidEndForModule:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)_updateFromLocationChange:(id)arg1;
- (void)_preferencesChanged:(id)arg1;
- (void)_photoInfoChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateSpanCacheCoordinateForAnnotation:(id)arg1;
- (void)_setCachedSpan:(CDStruct_c3b9c2ee)arg1 forAnnotation:(id)arg2;
- (CDStruct_c3b9c2ee)_cachedSpanForAnnotation:(id)arg1;
- (void)interrogateEvent:(id)arg1;
- (void)controlLostMouseFocus:(id)arg1;
- (void)controlGotMouseFocus:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_updateMapLabelForContainerWithPhotoList:(id)arg1;
- (void)_completionMenuShouldHide:(id)arg1 overrideTextDismiss:(BOOL)arg2;
- (void)_updateCompletion;
- (int)_locationCompletionType;
- (id)_stringByStrippingLineEndingsOfString:(id)arg1;
- (void)_updatePlaceLabelStatus;
- (void)_disablePlaceLabelEditing;
- (void)_enablePlaceLabelEditing;
- (void)_autocompleteForField;
- (void)completionMenuShouldHide:(id)arg1;
- (struct IPPhotoList *)photosForLocationCompletion;
- (void)performPlaceUndoRedoForPhotos:(id)arg1 withPlacesList:(id)arg2 undoMgr:(id)arg3;
- (void)loadCurrentPlaceStateIntoUndoManager;
- (BOOL)_addAnnotationsToMap:(id)arg1;
- (void)_markLocationsFromPhotoList:(id)arg1;
- (BOOL)_setPhotoList:(struct IPPhotoList *)arg1;
- (void)_deleteEventVector;
- (struct IPPhotoList *)_copyPhotosForContainerSelection;
- (vector_a4032abb *)_createEventVectorBasedOnCurrentSelection;
- (void)updateForLocation:(BOOL)arg1;
- (void)usePhotoList:(struct IPPhotoList *)arg1 inDB:(id)arg2 fromContentViewController:(id)arg3;
- (void)selectionChanged:(id)arg1;
- (void)stopListeningForSelectionChanges;
- (void)startListeningForSelectionChanges;
- (void)_tryToUnhideNavigationControls;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)clearLocation:(id)arg1;
- (void)downArrowForTextField:(id)arg1;
- (void)showPlacesClicked:(id)arg1;
- (void)switchToHybridMap:(id)arg1;
- (void)switchToSatelliteMap:(id)arg1;
- (void)switchToTerrainMap:(id)arg1;
- (void)centerMapClicked:(id)arg1;
- (id)_currentFont;
- (void)_updateButtons;
- (double)_labelWidth;
- (void)_showActualMap;
- (void)_showPlaceholderMap;
- (void)_setEnableTrackingAreaForMapControls:(BOOL)arg1;
- (void)_loadNib;
- (id)photoMapModule;
- (void)_updateUI;
- (void)updateUI;
- (void)setIsAnimating:(BOOL)arg1;
- (double)_thresholdLongitudeSpanForMostPopularCountryFallback;
- (void)setMapMode:(int)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

