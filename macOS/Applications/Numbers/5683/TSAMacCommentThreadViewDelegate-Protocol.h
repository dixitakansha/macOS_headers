//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSAMacCommentThreadContentView, TSAMacCommentThreadView;

@protocol TSAMacCommentThreadViewDelegate <NSObject>
- (void)restoreFirstResponderForThreadContentView:(TSAMacCommentThreadContentView *)arg1;
- (void)threadView:(TSAMacCommentThreadView *)arg1 didUpdateHeight:(double)arg2;

@optional
- (void)threadViewBeganEditing:(TSAMacCommentThreadView *)arg1;
- (void)textChangedInThreadView:(TSAMacCommentThreadView *)arg1;
@end

