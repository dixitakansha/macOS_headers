//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SecurityFoundation/_SFKey.h>

@interface _SFPublicKey : _SFKey
{
    id _publicKeyInternal;
}

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (Class)_attributesClass;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_secKey) struct OpaqueSecKeyRef *secKey;
- (id)initWithSecKey:(struct OpaqueSecKeyRef *)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;
- (id)initWithAttributes:(id)arg1;

@end

