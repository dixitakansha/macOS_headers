//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSString;

@interface AbstractPreferencesViewController : NSViewController
{
    struct CGSize _initialSize;
}

@property(nonatomic) struct CGSize initialSize; // @synthesize initialSize=_initialSize;
- (void)willRemoveView;
- (void)willAddView;
@property(readonly, nonatomic) BOOL canRemoveView;
@property(readonly, nonatomic) NSString *toolbarIdentifier;
- (void)loadView;

@end

