//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSFastEnumeration-Protocol.h>

@protocol NSFastEnumeration;

@interface CPLPrequeliteSkipNullEnumerator : NSObject <NSFastEnumeration>
{
    id <NSFastEnumeration> _enumerator;
    unsigned long long _sizeOfItemPtr;
    id *_itemPtr;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithEnumerator:(id)arg1;

@end

