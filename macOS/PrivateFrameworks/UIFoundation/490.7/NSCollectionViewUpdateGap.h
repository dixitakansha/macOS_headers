//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCollectionViewUpdateItem, NSMutableArray;

@interface NSCollectionViewUpdateGap : NSObject
{
    NSCollectionViewUpdateItem *_firstUpdateItem;
    NSCollectionViewUpdateItem *_lastUpdateItem;
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct CGRect _beginningRect;
    struct CGRect _endingRect;
}

+ (id)gapWithUpdateItem:(id)arg1;
@property(nonatomic) struct CGRect endingRect; // @synthesize endingRect=_endingRect;
@property(nonatomic) struct CGRect beginningRect; // @synthesize beginningRect=_beginningRect;
@property(readonly, nonatomic) NSArray *insertItems; // @synthesize insertItems=_insertItems;
@property(readonly, nonatomic) NSArray *deleteItems; // @synthesize deleteItems=_deleteItems;
@property(retain, nonatomic) NSCollectionViewUpdateItem *lastUpdateItem; // @synthesize lastUpdateItem=_lastUpdateItem;
@property(retain, nonatomic) NSCollectionViewUpdateItem *firstUpdateItem; // @synthesize firstUpdateItem=_firstUpdateItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isSectionBasedGap;
@property(readonly, nonatomic) NSArray *updateItems;
@property(readonly, nonatomic) BOOL hasInserts;
@property(readonly, nonatomic) BOOL isDeleteBasedGap;
- (void)addUpdateItem:(id)arg1;
- (id)description;
- (id)init;

@end

