//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DBPAPERRefPaperDoc.h"

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface DBPAPERListUsersOnFolderArgs : DBPAPERRefPaperDoc <DBSerializable, NSCopying>
{
    NSNumber *_limit;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (BOOL)isEqualToListUsersOnFolderArgs:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDocId:(id)arg1;
- (id)initWithDocId:(id)arg1 limit:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

