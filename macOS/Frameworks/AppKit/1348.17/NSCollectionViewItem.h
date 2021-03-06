//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSArray, NSCollectionView, NSData, NSImageView, NSTextField;

@interface NSCollectionViewItem : NSViewController <NSCopying>
{
    NSCollectionView *_collectionView;
    struct {
        unsigned int isSelected:1;
        unsigned int suppressSelectionChangedNotification:1;
        unsigned int connectionsCopied:1;
        unsigned int reserved:29;
    } _cviFlags;
    NSData *_cachedArchive;
    void *_reserved2;
}

- (id)description;
- (id)_nibWithName:(id)arg1 bundle:(id)arg2;
- (id)representedObject;
@property(readonly) NSArray *draggingImageComponents;
- (id)_draggingItemView;
- (id)_draggingImageForView:(id)arg1;
@property NSTextField *textField;
@property NSImageView *imageView;
- (BOOL)_isLoaded;
- (BOOL)_shouldLoadFromNib;
- (void)_setSelectedWithoutNotification:(BOOL)arg1;
- (BOOL)_needsToCopyConnections;
- (id)_declaredKeys;
- (void)_setCollectionView:(id)arg1;
@property(readonly) NSCollectionView *collectionView;
@property(getter=isSelected) BOOL selected;
- (void)_copyConnectionsToItem:(id)arg1;
- (void)_copyConnectionsOfObject:(id)arg1 prototypeItem:(id)arg2 toObject:(id)arg3 item:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

