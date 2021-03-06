//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class _NSQuickActionTouchBarItemDataSource;
@protocol _NSQuickActionTouchBarItemDelegate;

__attribute__((visibility("hidden")))
@interface _NSQuickActionTouchBarItem : NSCollectionViewItem
{
    id <_NSQuickActionTouchBarItemDelegate> _delegate;
    BOOL _isObserving;
}

+ (id)keyPathsForValuesAffectingRepresentedDataSource;
+ (BOOL)automaticallyNotifiesObserversOfRepresentedDataSource;
@property __weak id <_NSQuickActionTouchBarItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)buttonPressed:(id)arg1;
@property(readonly) _NSQuickActionTouchBarItemDataSource *representedDataSource;
- (void)loadView;
- (void)prepareForReuse;
- (struct CGSize)fittingSizeForCollectionView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

