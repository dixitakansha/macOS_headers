//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

@interface NSColorPickerUserView : NSView
{
    NSImage *currImage;
    struct CGPoint currentPt;
    id colorPanel;
    id controllingPicker;
    NSImage *_imageForLockFocusUse;
}

- (void)dealloc;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)registerForFilenameDragTypes;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)_pointInPicker:(struct CGPoint *)arg1;
- (id)color;
- (id)colorFromPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_resizeImage;
- (void)setImage:(id)arg1;
- (id)_getColorFromImageAtPoint:(struct CGPoint)arg1;
- (void)_clearImageForLockFocusUse;
- (void)_createImageForLockFocusUseIfNecessary;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)storeColorPanel:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveCurrentPointInDirection:(struct CGPoint)arg1;
- (void)setKeyboardFocusRingNeedsDisplayIfNeededInRect:(struct CGRect)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_windowChangedKeyState;
- (BOOL)_isShowingKeyboardFocus;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;

@end

