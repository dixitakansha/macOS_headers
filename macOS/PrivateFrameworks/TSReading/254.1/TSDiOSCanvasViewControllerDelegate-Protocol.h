//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDiOSCanvasViewController, UIGestureRecognizer, UITouch, UIView, UIViewController;

@protocol TSDiOSCanvasViewControllerDelegate <NSObject>

@optional
- (BOOL)canvasViewController:(TSDiOSCanvasViewController *)arg1 enableSwipeGestureWithNumberOfTouches:(unsigned long long)arg2;
- (UIViewController *)viewControllerForPresentingAnnotationAuthorUI;
- (void)handleFindTapAtPoint:(struct CGPoint)arg1;
- (BOOL)inFindReplaceMode;
- (BOOL)allowEditMenuToAppear;
- (BOOL)isPopoverGestureInFlight;
- (Class)canvasViewClassOverride;
- (BOOL)shouldIgnoreTextGestures;
- (BOOL)canvasViewControllerShouldShowScaleFeedback:(TSDiOSCanvasViewController *)arg1;
- (BOOL)canvasViewController:(TSDiOSCanvasViewController *)arg1 shouldBeginTapHoldDragAtPoint:(struct CGPoint)arg2;
- (BOOL)allowTouchOutsideCanvasView:(UITouch *)arg1 forGesture:(UIGestureRecognizer *)arg2;
- (UIView *)viewForGestureRecognizer:(UIGestureRecognizer *)arg1;
@end

