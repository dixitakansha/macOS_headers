//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAsset, CKDMMCSItemCommandWriter, CKPackage, CKRecordID, NSData, NSDictionary, NSError, NSMutableArray, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDMMCSItem : NSObject
{
    BOOL _inMemoryDownloadLooksOkay;
    BOOL _hasSize;
    BOOL _hasOffset;
    BOOL _finished;
    BOOL _temporary;
    BOOL _shouldReadRawEncryptedData;
    BOOL _isAlreadyRegistered;
    BOOL _isReaderReadFrom;
    unsigned int _chunkCount;
    NSURL *_fileURL;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSNumber *_modTimeInSeconds;
    unsigned long long _itemID;
    double _progress;
    unsigned long long _size;
    unsigned long long _offset;
    unsigned long long _packageIndex;
    NSString *_putPackageSectionIdentifier;
    CKAsset *_asset;
    CKPackage *_package;
    CKRecordID *_recordID;
    NSString *_recordType;
    NSString *_recordKey;
    NSData *_signature;
    NSString *_itemTypeHint;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    NSData *_authRequest;
    NSString *_uploadReceipt;
    NSMutableArray *_sectionItems;
    NSError *_error;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_referenceSignature;
    CKDMMCSItemCommandWriter *_writer;
    unsigned long long _uploadTokenExpiration;
    unsigned long long _downloadTokenExpiration;
    NSDictionary *_assetChunkerOptions;
    NSString *_trackingUUID;
}

@property(nonatomic) BOOL isReaderReadFrom; // @synthesize isReaderReadFrom=_isReaderReadFrom;
@property(nonatomic) BOOL isAlreadyRegistered; // @synthesize isAlreadyRegistered=_isAlreadyRegistered;
@property(nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property(nonatomic, getter=isTemporary) BOOL temporary; // @synthesize temporary=_temporary;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL hasOffset; // @synthesize hasOffset=_hasOffset;
@property(nonatomic) BOOL hasSize; // @synthesize hasSize=_hasSize;
@property(retain, nonatomic) NSString *trackingUUID; // @synthesize trackingUUID=_trackingUUID;
@property(retain, nonatomic) NSDictionary *assetChunkerOptions; // @synthesize assetChunkerOptions=_assetChunkerOptions;
@property(nonatomic) unsigned long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property(nonatomic) unsigned long long uploadTokenExpiration; // @synthesize uploadTokenExpiration=_uploadTokenExpiration;
@property(nonatomic) BOOL inMemoryDownloadLooksOkay; // @synthesize inMemoryDownloadLooksOkay=_inMemoryDownloadLooksOkay;
@property(retain, nonatomic) CKDMMCSItemCommandWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;
@property(retain, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property(retain, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(retain, nonatomic) NSData *authRequest; // @synthesize authRequest=_authRequest;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(retain, nonatomic) NSString *itemTypeHint; // @synthesize itemTypeHint=_itemTypeHint;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(retain, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) CKPackage *package; // @synthesize package=_package;
@property(retain, nonatomic) CKAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *putPackageSectionIdentifier; // @synthesize putPackageSectionIdentifier=_putPackageSectionIdentifier;
@property(nonatomic) unsigned long long packageIndex; // @synthesize packageIndex=_packageIndex;
@property(nonatomic) unsigned int chunkCount; // @synthesize chunkCount=_chunkCount;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSNumber *modTimeInSeconds; // @synthesize modTimeInSeconds=_modTimeInSeconds;
@property(retain, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property(retain, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (id)getFileMetadataWithFileHandle:(id)arg1 error:(id *)arg2;
- (id)getFileSizeWithError:(id *)arg1;
- (id)getFileSizeWithProxy:(id)arg1 error:(id *)arg2;
- (id)openWithError:(id *)arg1;
- (id)openWithProxy:(id)arg1 error:(id *)arg2;
- (id)_openInfo;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithPackage:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)init;

@end

