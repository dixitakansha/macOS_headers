//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IGTextView.h"

@class RemindMeLocationDelegate;

@interface IGLocationSubtextField : IGTextView
{
    RemindMeLocationDelegate *_delegate;
}

@property(retain) RemindMeLocationDelegate *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)respectWidth;
- (void)setTitle:(id)arg1 error:(BOOL)arg2;
- (void)updateFromReminder;
- (BOOL)isVisible;
- (void)sizeToFit;
- (id)initWithLocationDelegate:(id)arg1;

@end

