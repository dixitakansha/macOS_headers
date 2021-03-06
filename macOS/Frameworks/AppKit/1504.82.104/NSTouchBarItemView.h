//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/_NSTouchBarItemLayoutWrapper-Protocol.h>

@class NSString, NSTouchBarItem;

@interface NSTouchBarItemView : NSView <_NSTouchBarItemLayoutWrapper>
{
    NSTouchBarItem *_touchBarItem;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    struct CGSize _preferredSize;
    BOOL _isSpace;
    BOOL _isInCustomizationPalette;
    BOOL _disabled;
    long long _priorityIndex;
}

@property BOOL disabled; // @synthesize disabled=_disabled;
@property BOOL isInCustomizationPalette; // @synthesize isInCustomizationPalette=_isInCustomizationPalette;
@property(readonly) BOOL isSpace; // @synthesize isSpace=_isSpace;
- (void)_subview:(id)arg1 valueOfVariable:(id)arg2 didChangeInEngine:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_deferringLayoutNotifications:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long itemPosition;
@property long long priorityIndex;
@property(readonly) struct CGSize contentClippingSize;
@property(readonly) struct CGSize preferredSize;
@property(readonly) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly) struct CGSize minSize; // @synthesize minSize=_minSize;
- (void)dealloc;
- (id)_viewForItem;
- (void)_noteTouchBarItemViewChanged;
@property(retain) NSTouchBarItem *touchBarItem; // @synthesize touchBarItem=_touchBarItem;
- (id)hitTest:(struct CGPoint)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (void)setFunctionBarItem:(id)arg1;
- (id)functionBarItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) double itemPadding;
@property(readonly) Class superclass;

@end

