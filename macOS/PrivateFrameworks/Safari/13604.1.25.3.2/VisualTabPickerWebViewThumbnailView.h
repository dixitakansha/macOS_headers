//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/VisualTabPickerThumbnailViewInnerView-Protocol.h>

@class SearchableWKView;

__attribute__((visibility("hidden")))
@interface VisualTabPickerWebViewThumbnailView : NSView <VisualTabPickerThumbnailViewInnerView>
{
    SearchableWKView *_wkView;
    id _snapshotRequestToken;
    BOOL _visibleToUser;
}

@property(nonatomic) BOOL visibleToUser; // @synthesize visibleToUser=_visibleToUser;
- (void).cxx_destruct;
- (void)_cancelSnapshotRequestIfNeeded;
- (void)_requestSnapshotFromWebView;
@property(readonly, nonatomic) SearchableWKView *boundWKView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSearchableWKView:(id)arg1;

@end

