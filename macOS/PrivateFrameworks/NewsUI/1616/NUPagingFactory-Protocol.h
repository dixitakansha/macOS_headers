//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSArray;
@protocol NUPage, NUPaging;

@protocol NUPagingFactory <NSObject>
- (id <NUPaging>)paging:(id <NUPaging>)arg1 byRemovingPage:(id <NUPage>)arg2;
- (id <NUPaging>)paging:(id <NUPaging>)arg1 byAddingPage:(id <NUPage>)arg2 afterPage:(id <NUPage>)arg3;
- (id <NUPaging>)createPagingForArticleIDs:(NSArray *)arg1;
@end

