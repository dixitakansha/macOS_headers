//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ECSBItem, ECSBPageItem;

@interface ECSBOverflowItem : NSObject
{
    ECSBItem *_item;
    ECSBPageItem *_pageItem;
}

@property(readonly, nonatomic) ECSBPageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(readonly, nonatomic) ECSBItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 onPageItem:(id)arg2;

@end

