// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Travel.h instead.

#import <CoreData/CoreData.h>


extern const struct TravelAttributes {
	__unsafe_unretained NSString *enddate;
	__unsafe_unretained NSString *id;
	__unsafe_unretained NSString *identifier;
	__unsafe_unretained NSString *photo_url;
	__unsafe_unretained NSString *startdate;
	__unsafe_unretained NSString *title;
	__unsafe_unretained NSString *user_id;
} TravelAttributes;

extern const struct TravelRelationships {
} TravelRelationships;

extern const struct TravelFetchedProperties {
} TravelFetchedProperties;










@interface TravelID : NSManagedObjectID {}
@end

@interface _Travel : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (TravelID*)objectID;





@property (nonatomic, strong) NSDate* enddate;



//- (BOOL)validateEnddate:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* id;



@property int64_t idValue;
- (int64_t)idValue;
- (void)setIdValue:(int64_t)value_;

//- (BOOL)validateId:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* identifier;



//- (BOOL)validateIdentifier:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* photo_url;



//- (BOOL)validatePhoto_url:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSDate* startdate;



//- (BOOL)validateStartdate:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* title;



//- (BOOL)validateTitle:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSNumber* user_id;



@property int64_t user_idValue;
- (int64_t)user_idValue;
- (void)setUser_idValue:(int64_t)value_;

//- (BOOL)validateUser_id:(id*)value_ error:(NSError**)error_;






@end

@interface _Travel (CoreDataGeneratedAccessors)

@end

@interface _Travel (CoreDataGeneratedPrimitiveAccessors)


- (NSDate*)primitiveEnddate;
- (void)setPrimitiveEnddate:(NSDate*)value;




- (NSNumber*)primitiveId;
- (void)setPrimitiveId:(NSNumber*)value;

- (int64_t)primitiveIdValue;
- (void)setPrimitiveIdValue:(int64_t)value_;




- (NSString*)primitiveIdentifier;
- (void)setPrimitiveIdentifier:(NSString*)value;




- (NSString*)primitivePhoto_url;
- (void)setPrimitivePhoto_url:(NSString*)value;




- (NSDate*)primitiveStartdate;
- (void)setPrimitiveStartdate:(NSDate*)value;




- (NSString*)primitiveTitle;
- (void)setPrimitiveTitle:(NSString*)value;




- (NSNumber*)primitiveUser_id;
- (void)setPrimitiveUser_id:(NSNumber*)value;

- (int64_t)primitiveUser_idValue;
- (void)setPrimitiveUser_idValue:(int64_t)value_;




@end
